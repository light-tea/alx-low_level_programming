
		if (!(b[len] == '0' || b[len] == '1'))
			return (0);
	}

	for (i = 0; *(b + i) != '\0'; i++)
		num += ((*(b + i) - '0') * (1 << (len - i - 1)));

	return (num);

		if (!(b[len] == '0' || b[len] == '1'))
			return (0);
	}

	for (i = 0; *(b + i) != '\0'; i++)
		num += ((*(b + i) - '0') * (1 << (len - i - 1)));

	return (num);

		if (!(b[len] == '0' || b[len] == '1'))
			return (0);
	}

	for (i = 0; *(b + i) != '\0'; i++)
		num += ((*(b + i) - '0') * (1 << (len - i - 1)));

	return (num);
}}}
